import java.io.*;

class Codechef {
    public static void main(String[] args) throws java.lang.Exception {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        int t = Integer.parseInt(br.readLine());

        while (t > 0) {
            String[] str = br.readLine().split(" ");

            long a = Long.parseLong(str[0]);
            long b = Long.parseLong(str[1]);
            long n = Long.parseLong(str[2]);

            long ans = 0;

            if (a % b == 0) {
                ans = -1;
            } else {
                ans = (n % a == 0) ? n : n + a - (n % a);

                while (true) {
                    if (ans % b != 0)
                        break;

                    ans += a;
                }
            }

            System.out.println(ans);

            t--;
        }

        br.close();
    }
}