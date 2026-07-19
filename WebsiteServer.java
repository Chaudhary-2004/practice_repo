import com.sun.net.httpserver.HttpServer;
import java.io.IOException;
import java.io.OutputStream;
import java.net.InetSocketAddress;
import java.nio.file.Files;
import java.nio.file.Path;

public class WebsiteServer {
    public static void main(String[] args) throws IOException {
        int port = 8080;
        HttpServer server = HttpServer.create(new InetSocketAddress(port), 0);

        server.createContext("/", exchange -> {
            byte[] response = Files.readAllBytes(Path.of("index.html"));
            exchange.getResponseHeaders().set("Content-Type", "text/html; charset=UTF-8");
            exchange.sendResponseHeaders(200, response.length);

            try (OutputStream outputStream = exchange.getResponseBody()) {
                outputStream.write(response);
            }
        });

        server.setExecutor(null);
        server.start();
        System.out.println("Website server running at http://localhost:" + port);
    }
}
