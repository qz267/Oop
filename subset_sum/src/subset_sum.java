import java.util.Arrays;
import java.util.HashMap;
import java.util.Map;


public class subset_sum {

}
public long getCount(int[] bag) {
long res = 0;
Map<Integer, Integer> mii = new HashMap<Integer, Integer>();
int tot = 0;
for (int key : bag) {
    tot += key;
    if (mii.get(key) != null) {
    mii.put(key, mii.get(key) + 1);
    }
    else {
    mii.put(key, 1);
    }
}
boolean[] isp = getPrimes(tot);
long[] memo1 = new long[tot + 1];
long[] memo2 = new long[tot + 1];
memo1[0] = 1;
for (int key : mii.keySet()) {
    int cnt = mii.get(key);
    for (int i = 0; i <= tot; i++) {
    for (int j = 0; j <= cnt; j++) {
        int need = j * key;
        if (i >= need) {
        memo2[i] += memo1[i - need];
        }
    }
    }
    long[] temp = memo1;
    memo1 = memo2;
    memo2 = temp;
    Arrays.fill(memo2, 0);
}
for (int i = 0; i <= tot; i++)
    if (isp[i])
    res += memo1[i];
return res;
}