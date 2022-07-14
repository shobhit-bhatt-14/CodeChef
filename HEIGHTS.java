/* package codechef; // don't place package name! */

import java.util.*;
import java.util.Map.Entry;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Codechef {
    public static void main(String[] args) throws java.lang.Exception {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int t = Integer.parseInt(br.readLine());

        while (t > 0) {
            int n = Integer.parseInt(br.readLine());

            String[] heightsString = br.readLine().split(" ");

            HashMap<Integer, Integer> heights = new HashMap<>();

            for (String str : heightsString) {
                int key = Integer.parseInt(str);
                int value = heights.containsKey(key) ? (heights.get(key).intValue() + 1) : 1;
                heights.put(key, value);
            }

            int ans = 0, maxFreq = 0;

            for (Entry<Integer, Integer> entry : heights.entrySet()) {
                int val = entry.getValue();

                maxFreq = Math.max(maxFreq, val);

                if (val == 1)
                    ans++;
            }

            if (ans != 1)
                ans = ((ans & 1) == 1) ? (ans + 1) / 2 : ans / 2;
            else {
                TreeMap<Integer, Integer> tMap = new TreeMap<>();
                tMap.putAll(heights);

                if (tMap.lastEntry().getValue() == 1 && maxFreq == 2)
                    ans++;
            }

            System.out.println(ans);

            t--;
        }

        br.close();
    }
}
