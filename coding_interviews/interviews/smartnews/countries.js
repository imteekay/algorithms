function solution(A) {
  let countries = buildCountriesMapper(A);
  let countriesCount = 0;

  for (let row = 0; row < A.length; row++) {
    for (let col = 0; col < A[row].length; col++) {
      const country = A[row][col];
      if (!countries[row][col]) countriesCount++;
      verifyCountry(A, country, row, col, countries);
    }
  }

  return countriesCount;
}

function buildCountriesMapper(A) {
  const mapper = [];

  for (let row = 0; row < A.length; row++) {
    const line = [];

    for (let col = 0; col < A[row].length; col++) {
      line.push(false);
    }

    mapper.push(line);
  }

  return mapper;
}

function verifyCountry(A, country, row, col, countries) {
  if (
    row < 0 ||
    col < 0 ||
    row >= A.length ||
    col >= A[row].length ||
    countries[row][col] ||
    country !== A[row][col]
  )
    return;

  countries[row][col] = true;
  country = A[row][col];

  verifyCountry(A, country, row, col - 1, countries);
  verifyCountry(A, country, row, col + 1, countries);
  verifyCountry(A, country, row + 1, col, countries);
}
