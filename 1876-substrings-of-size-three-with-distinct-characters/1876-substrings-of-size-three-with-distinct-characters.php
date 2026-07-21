class Solution {

    /**
     * @param String $s
     * @return Integer
     */
    function countGoodSubstrings($s) {
        $count = 0;
        $n = strlen($s);

        for ($i = 0; $i < $n - 2; $i++) {
            if ($s[$i] != $s[$i + 1] &&
                $s[$i] != $s[$i + 2] &&
                $s[$i + 1] != $s[$i + 2]) {
                $count++;
            }
        }

        return $count;
    }
}