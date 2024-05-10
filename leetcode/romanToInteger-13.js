/**
 * @param {string} s
 * @return {number}
 */
var romanToInt = function (s) {
  let result = 0;
  for (let i = 0; i < s.length; i++) {
    if (s[i] === "C" && s[i + 1] === "M") {
      result += 900;
      i++;
    } else if (s[i] === "C" && s[i + 1] === "D") {
      result += 400;
      i++;
    } else if (s[i] === "X" && s[i + 1] === "C") {
      result += 90;
      i++;
    } else if (s[i] === "X" && s[i + 1] === "L") {
      result += 40;
      i++;
    } else if (s[i] === "I" && s[i + 1] === "X") {
      result += 9;
      i++;
    } else if (s[i] === "I" && s[i + 1] === "V") {
      result += 4;
      i++;
    } else if (s[i] === "I") result = result + 1;
    else if (s[i] === "V") result = result + 5;
    else if (s[i] === "X") result = result + 10;
    else if (s[i] === "L") result = result + 50;
    else if (s[i] === "C") result = result + 100;
    else if (s[i] === "D") result = result + 500;
    else if (s[i] === "M") result = result + 1000;
  }

  return result;
};
