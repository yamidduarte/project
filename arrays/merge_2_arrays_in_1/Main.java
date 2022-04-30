package com.yamidduarte;

import java.util.Arrays;

public class Main {

    public static void main(String[] args) {
	    Solution testSuite = new Solution();
        int[] nums1 = {1,2,3,0,0,0};
        int m = 3;
        int[] nums2 = {2,5,6};
        int n = nums2.length;
        System.out.println("Input 1: " + Arrays.toString(nums1));
        System.out.println("Input 2: " + Arrays.toString(nums2));
        testSuite.merge(nums1, m, nums2, n);
        System.out.println(" Output: " + Arrays.toString(nums1));
    }
}
