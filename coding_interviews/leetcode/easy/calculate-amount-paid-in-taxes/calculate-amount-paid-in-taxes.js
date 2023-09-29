// https://leetcode.com/problems/calculate-amount-paid-in-taxes

function calculateTax(brackets, income) {
  let taxes = 0;
  let appliedIncome = 0;
  let moneyToApplyTax;
  let tax;

  for (let index = 0; index < brackets.length && income > 0; index++) {
    moneyToApplyTax = Math.min(income, brackets[index][0] - appliedIncome);
    appliedIncome += moneyToApplyTax;
    tax = moneyToApplyTax * (brackets[index][1] / 100);
    taxes += tax;
    income -= moneyToApplyTax;
  }

  return taxes;
}
