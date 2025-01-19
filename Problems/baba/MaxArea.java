public class MaxArea {
    public static int maxarea(int[] height) {
        int low = 0;
        int high = height.length - 1;
        int maximumArea = 0;
        while (true) {
            int x = 0, y = 0, area = 0;

            if (height[low] == height[high]) {
                x = high - low;
                y = height[low];
                area = x * y;
                low++;
                high--;
            } else if (height[low] < height[high]) {
                x = high - low;
                y = height[low];
                area = x * y;
                low++;
            } else {
                x = high - low;
                y = height[high];
                area = x * y;
                high--;
            }

            if (x == 1) {
                return maximumArea;
            }

            if (area > maximumArea) {
                maximumArea = area;
            }

        }

    }

    public static void main(String[] args) {
        int[] height = { 1, 14, 9, 0, 12, 0, 3, 1 };
        System.out.println(MaxArea.maxarea(height));
    }
}
