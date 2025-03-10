#include <iostream>
using namespace std;

class Area
{
public:
  double getArea();
};

class fieldArea : public Area
{
private:
  double field_l;
  double field_w;

public:
  fieldArea(double field_l, double field_w) : field_l(field_l), field_w(field_w) {}

  double getArea()
  {
    return field_l * field_w;
  }

  double get_field_length() const
  {
    return field_l;
  }

  double get_field_width() const
  {
    return field_w;
  }
};

class gardenArea : public Area
{
private:
  double garden_w;

public:
  gardenArea(double garden_w) : garden_w(garden_w) {}

  double getArea(fieldArea &field)
  {
    double field_l = field.get_field_length();
    double field_w = field.get_field_width();

    double total_area = (2 * garden_w + field_l) * (2 * garden_w + field_w);
    double field_area = field.getArea();

    return total_area - field_area;
  }
};

int main()
{
  double field_l, field_w, garden_w;

  // Field input
  cout << "Enter the length and width of the field: ";
  cin >> field_l >> field_w;

  fieldArea field(field_l, field_w);
  cout << "Total area of the field: " << field.getArea() << " square units" << endl << endl;

  // Garden input
  cout << "Enter the width of the garden: ";
  cin >> garden_w;

  gardenArea garden(garden_w);
  cout << "Total area of the garden: " << garden.getArea(field) << " square units" << endl;

  return 0;
}
