public class versionCompare {

    public static int compareVersion(String version1, String version2) {
    
        // split the given version between .
        String[] forVersion1 = version1.split("\\.");
        String[] forVersion2 = version2.split("\\.");

        int i = 0, j = 0;
        while (i < forVersion1.length && j < forVersion1.length) {
            if (Integer.parseInt(forVersion1[i]) > Integer.parseInt(forVersion2[j])) {
                return 1;
            } else if (Integer.parseInt(forVersion1[i]) < Integer.parseInt(forVersion2[j])) {
                return -1;
            }
            i++;
            j++;
        }
        return 0;
    }

    public static void main(String[] args) {
        String ver1 = "0.1";
        String ver2 = "1.1";

        System.out.println(versionCompare.compareVersion(ver1, ver2));
    }
}
