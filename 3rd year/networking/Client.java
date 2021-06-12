
import java.io.BufferedReader;//character stream
import java.io.BufferedWriter;//character stream
import java.io.InputStream;//byte stream
import java.io.OutputStream;//byte stream
import java.io.InputStreamReader;//briage b/n byte and character converts the byte stream into a character stream
import java.io.OutputStreamWriter;//converts the character stream into a byte stream.
import java.net.InetAddress;//ip address
import java.net.Socket;
import java.util.Scanner; 

class Client
{
 
    private static Socket socket;
 
    public static void main(String args[])
    {
        try
        {
            String host = "localhost";
            int port = 4444;
            InetAddress address = InetAddress.getByName(host);
            socket = new Socket(address, port);
            String s;
            
            OutputStream os = socket.getOutputStream();
            OutputStreamWriter osw = new OutputStreamWriter(os);
            BufferedWriter bw = new BufferedWriter(osw);
            
            Scanner in = new Scanner(System.in);
            System.out.println("Enter a string");
            s = in.nextLine();
            
            InputStream is = socket.getInputStream();//in byte
            InputStreamReader isr = new InputStreamReader(is);
            
            while(!s.equals("END")) {
            
            String sendMessage = s + "\n";
            bw.write(sendMessage);
            bw.flush();
            System.out.println("Message sent to the server : "+sendMessage);
 
            //Get the return message from the server
         
            BufferedReader br = new BufferedReader(isr);
            String message = br.readLine();
            System.out.println("Message received from the server : " +message);
            
            if (s.equals( "STOP"))
            	break;
            
            System.out.println("Enter a string");
            s = in.nextLine();
            
            }
            
 
        }
        catch (Exception exception)
        {
            exception.printStackTrace();
        }
        finally
        {
            //Closing the socket
            try
            {
                socket.close();
            }
            catch(Exception e)
            {
                e.printStackTrace();
            }
        }
    }
}
