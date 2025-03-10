class Example
{
public:
  Example() {}
  Example(const Example &obj) = delete; // ❌ Copy constructor deleted
};

int main()
{
  Example obj1;
  Example obj2 = obj1; // ❌ Compilation error (copying not allowed)
  return 0;
}
