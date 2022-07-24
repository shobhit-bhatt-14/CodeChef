import java.io.*;

class Codechef {
    public static void main(String[] args) throws java.lang.Exception {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        int t = Integer.parseInt(br.readLine());

        while (t > 0) {
            String[] str = br.readLine().split(" ");

            long costN = Long.parseLong(str[0]);
            long costP = Long.parseLong(str[1]);
            long nums = Long.parseLong(str[2]);
            long amount = Long.parseLong(str[3]);

            if (costN * nums > amount) {
                System.out.println(String.valueOf(-1));
            } else {
                long numP = amount - (costN * nums);

                numP /= (costP - costN);

                numP = Math.min(numP, nums);

                System.out.println(String.valueOf(nums - numP) + " " + String.valueOf(numP));
            }

            t--;
        }

        br.close();
    }
}
