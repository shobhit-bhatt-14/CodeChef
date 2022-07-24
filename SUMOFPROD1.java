import java.io.*;

class Codechef {
    public static void main(String[] args) throws java.lang.Exception {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        int t = Integer.parseInt(br.readLine());

        while (t > 0) {
            int n = Integer.parseInt(br.readLine());

            String[] str = br.readLine().split(" ");

            long ans = 0;
            long count = 0;

            for (String s : str) {
                if (s.equals("0")) {
                    if (count > 0) {
                        ans += getProduct(count);
                        count = 0;
                    }
                } else {
                    count++;
                }
            }

            if (count > 0)
                ans += getProduct(count);

            System.out.println(ans);

            t--;
        }

        br.close();
    }

    public static long getProduct(long n) {
        return n * (n + 1) / 2;
    }
}