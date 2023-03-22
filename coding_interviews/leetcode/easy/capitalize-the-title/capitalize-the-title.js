function isUppercase(char) {
  return char.charCodeAt() >= 65 && char.charCodeAt() <= 90;
}

function isLowercase(char) {
  return char.charCodeAt() >= 97 && char.charCodeAt() <= 122;
}

function capitalizeChar(char) {
  return isUppercase(char) ? char : String.fromCharCode(char.charCodeAt() - 32);
}

function lowercaseChar(char) {
  return isLowercase(char) ? char : String.fromCharCode(char.charCodeAt() + 32);
}

function capitalize(string) {
  return capitalizeChar(string[0]) + lowercase(string.slice(1));
}

function lowercase(string) {
  return string.split('').map(lowercaseChar).join('');
}

function parse(string) {
  return string.length <= 2 ? lowercase(string) : capitalize(string);
}

function capitalizeTitle(title) {
  return title.split(' ').map(parse).join(' ');
}
