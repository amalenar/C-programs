public class Area {

    int r, length, breadth, ls, lt, height;
    double area;

    public double circle(int r) {

        this.r = r;
        area = 3.14 * r;

        return area;
    }

    public double rectangle(int lr, int br) {

        this.length = lr;
        this.breadth = br;
        area = length * breadth;
        return area;
    }

    public double square(int ls) {
        this.ls = ls;
        area = ls * ls;
        return area;
    }

    public double triangle(int lt, int height) {
        this.lt = lt;
        this.height = height;
        area = 0.5 * (lt * height);

        return area;
    }

}
