const COMPARISON = {
  EQUAL: 'EQUAL',
  SUBLIST: 'SUBLIST',
  SUPERLIST: 'SUPERLIST',
  UNEQUAL: 'UNEQUAL',
};

export class List {
  constructor(numbers = []) {
    this.numbers = numbers;
  }

  compare(otherList) {
    const otherNumbers = otherList.numbers;
    const numbersLength = this.numbers.length;
    const otherLength = otherNumbers.length;

    if (numbersLength < otherLength) {
      return this.isSublist(otherNumbers)
        ? COMPARISON.SUBLIST
        : COMPARISON.UNEQUAL;
    }

    if (numbersLength > otherLength) {
      return this.isSuperList(this.numbers, otherNumbers)
        ? COMPARISON.SUPERLIST
        : COMPARISON.UNEQUAL;
    }

    return this.isIdentical(this.numbers, otherNumbers)
      ? COMPARISON.EQUAL
      : COMPARISON.UNEQUAL;
  }

  isIdentical(numbers, otherList) {
    if (numbers.length !== otherList.length) return false;

    for (let i = 0; i < numbers.length; i++) {
      if (numbers[i] !== otherList[i]) return false;
    }

    return true;
  }

  isSublist(otherNumbers) {
    const numbersLength = this.numbers.length;
    const otherLength = otherNumbers.length;

    for (let i = 0; i < otherLength - numbersLength + 1; i++) {
      if (
        this.isIdentical(this.numbers, otherNumbers.slice(i, i + numbersLength))
      ) {
        return true;
      }
    }

    return false;
  }

  isSuperList(numbers, otherNumbers) {
    const numbersLength = numbers.length;
    const otherLength = otherNumbers.length;

    for (let i = 0; i < numbersLength - otherLength + 1; i++) {
      if (this.isIdentical(numbers.slice(i, i + otherLength), otherNumbers)) {
        return true;
      }
    }

    return false;
  }
}
