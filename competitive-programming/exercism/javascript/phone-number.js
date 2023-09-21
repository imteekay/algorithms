const isDigit = (char) => '0' <= char && char <= '9';

const getDigits = (phoneNumber) =>
  phoneNumber.split('').filter(isDigit).join('');

const verifyDigitsLength = (digits) => {
  if (digits.length < 10) {
    throw new Error('Incorrect number of digits');
  }

  if (digits.length >= 12) {
    throw new Error('More than 11 digits');
  }
};

const verifyCountryCode = (digits) => {
  if (digits.length === 11 && digits[0] !== '1') {
    throw new Error('11 digits must start with 1');
  }
};

const verifyAreaCode = (digits) => {
  if (digits.length === 10 && digits[0] === '0') {
    throw new Error('Area code cannot start with zero');
  }

  if (digits.length === 10 && digits[0] === '1') {
    throw new Error('Area code cannot start with one');
  }

  if (digits.length === 11 && digits[1] === '0') {
    throw new Error('Area code cannot start with zero');
  }

  if (digits.length === 11 && digits[1] === '1') {
    throw new Error('Area code cannot start with one');
  }
};

const verifyExchangeCode = (digits) => {
  if (digits.length === 10 && digits[3] === '0') {
    throw new Error('Exchange code cannot start with zero');
  }

  if (digits.length === 10 && digits[3] === '1') {
    throw new Error('Exchange code cannot start with one');
  }

  if (digits.length === 11 && digits[4] === '0') {
    throw new Error('Exchange code cannot start with zero');
  }

  if (digits.length === 11 && digits[4] === '1') {
    throw new Error('Exchange code cannot start with one');
  }
};

const verifyAlphabetChars = (digits) => {
  const alphabetChars = digits.match(/[A-Za-z]/g);

  if (alphabetChars && alphabetChars.length) {
    throw new Error('Letters not permitted');
  }
};

const verifyPunctuationChars = (digits) => {
  const punctuationChars = digits.match(/[,\/#!$%\^&\*;:{}=\_`~]/g);

  if (punctuationChars && punctuationChars.length) {
    throw new Error('Punctuations not permitted');
  }
};

export const clean = (phoneNumber) => {
  const digits = getDigits(phoneNumber);

  verifyAlphabetChars(phoneNumber);
  verifyPunctuationChars(phoneNumber);
  verifyDigitsLength(digits);
  verifyCountryCode(digits);
  verifyAreaCode(digits);
  verifyExchangeCode(digits);

  return digits.length === 11 ? digits.substring(1) : digits;
};
