import java.io.*;

class Codechef {
    public static void main(String[] args) throws java.lang.Exception {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        int t = Integer.parseInt(br.readLine());

        while (t > 0) {
            String[] str = br.readLine().split(" ");

            long n = Long.parseLong(str[0]);
            long m = Long.parseLong(str[1]);

            long a = 0;
            long b = 0;

            for (long i = n; i < 2 * n; ++i) {
                long j = (m / i) * i;

                if ((j - i) >= (b - a)) {
                    a = i;
                    b = j;
                }
            }

            System.out.println(a + " " + b);

            t--;
        }

        br.close();
    }
}