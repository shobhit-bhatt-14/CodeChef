import java.io.*;
import java.util.*;

class Codechef {
    public static void main(String[] args) throws java.lang.Exception {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        int t = Integer.parseInt(br.readLine());

        while (t > 0) {
            int n = Integer.parseInt(br.readLine());

            String[] str = br.readLine().split(" ");

            String ans = "";

            if (n == 2)
                ans = "YES";
            else {
                long[] nums = new long[n];

                for (int i = 0; i < n; i++) {
                    nums[i] = Long.parseLong(str[i]);
                }

                long[] temp = Arrays.copyOf(nums, n);
                Arrays.sort(temp);

                List<Long> list = new ArrayList<>();

                int index = 0;
                for (long x : nums) {
                    if (temp[index] == x) {
                        index++;
                    } else {
                        list.add(x);
                    }
                }

                if (isSorted(list))
                    ans = "YES";
                else
                    ans = "NO";
            }

            System.out.println(ans);

            t--;
        }

        br.close();
    }

    public static boolean isSorted(List<Long> list) {
        for (int i = 0; i < list.size() - 1; i++) {
            if (list.get(i) > list.get(i + 1)) {
                return false;
            }
        }

        return true;
    }
}