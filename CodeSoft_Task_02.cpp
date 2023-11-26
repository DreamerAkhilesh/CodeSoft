
# include <iostream>
using namespace std;

int main() {

  char op;
  float num_01, num_02;
  cout << "Enter operator: +, -, *, /: ";
  cin >> op;

  cout << "Enter two operands: ";
  cin >> num_01 >> num_02;

  switch(op) {

    case '+':
      cout << num_01 << " + " << num_02 << " = " << num_01 + num_02;
      break;

    case '-':
      cout << num_01 << " - " << num_02 << " = " << num_01 - num_02;
      break;

    case '*':
      cout << num_01 << " * " << num_02 << " = " << num_01 * num_02;
      break;

    case '/':
      cout << num_01 << " / " << num_02 << " = " << num_01 / num_02;
      break;

    default:
      // If the operator is other than +, -, * or /, error message is shown
      cout << "Error! operator is not correct";
      break;
  }

  return 0;
}