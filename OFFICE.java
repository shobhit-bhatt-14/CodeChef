import java.io.*;

class Codechef {
    public static void main(String[] args) throws java.lang.Exception {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        int t = Integer.parseInt(br.readLine());

        while (t > 0) {
            String[] str = br.readLine().split(" ");

            System.out.println((Integer.parseInt(str[0]) * 4) + Integer.parseInt(str[1]));

            t--;
        }

        br.close();
    }
}
