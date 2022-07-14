/* package codechef; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Codechef {
    public static void main(String[] args) throws java.lang.Exception {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int t = Integer.parseInt(br.readLine());

        while (t > 0) {
            int n = Integer.parseInt(br.readLine());

            String[] numsString = br.readLine().split(" ");

            int index1 = -1;
            int indexN = -1;

            for (int i = 0; i < n; i++) {
                int x = Integer.parseInt(numsString[i]);

                if (x == 1)
                    index1 = i;
                if (x == n)
                    indexN = i;
            }

            int ans = index1 + (n - 1) - indexN;

            ans = (index1 > indexN) ? ans-1 : ans;

            System.out.println(ans);

            t--;
        }

        br.close();
    }
}
