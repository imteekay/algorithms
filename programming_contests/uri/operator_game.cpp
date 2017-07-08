// https://www.urionlinejudge.com.br/judge/en/problems/view/2493

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

struct operation {
  int first_operator;
  int second_operator;
  int result;
};

bool is_result_correct(const operation &op, string oper) {
  bool sum_correct = op.first_operator + op.second_operator == op.result,
       subtraction_correct = op.first_operator - op.second_operator == op.result,
       multiplication_correct = op.first_operator * op.second_operator == op.result;

  return (oper == "+" && sum_correct ||
          oper == "-" && subtraction_correct ||
          oper == "*" && multiplication_correct ||
          oper == "I" && !sum_correct && !subtraction_correct && !multiplication_correct);
}

int main() {
  int N, first_operator, second_operator, result, ID;
  char useless;
  string name, oper;

  while (cin >> N) {
    vector<operation> operations;
    vector<string> people;

    for (int i = 0; i < N; i++) {
      cin >> first_operator >> second_operator >> useless >> result;
      operation op;
      op.first_operator = first_operator;
      op.second_operator = second_operator;
      op.result = result;
      operations.push_back(op);
    }

    for (int i = 0; i < N; i++) {
      cin >> name >> ID >> oper;
      if (!is_result_correct(operations[ID-1], oper)) people.push_back(name);
    }

    if (people.size() == N) {
      cout << "None Shall Pass!" << endl;
    } else if (people.size() > 0) {
      sort(people.begin(), people.end());
      cout << people[0];
      for (int i = 1; i < people.size(); i++) cout << " " << people[i];
      cout << endl;
    } else {
      cout << "You Shall All Pass!" << endl;
    }
  }

  return 0;
}
