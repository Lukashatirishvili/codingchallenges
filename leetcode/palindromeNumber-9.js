function isPalindrome(x) {
  if (x < 0) return false;

  let num = x;
  let reversed = 0;

  while (num >= 1) {
    temp = num % 10;
    reversed = reversed * 10 + temp;
    num = Math.floor(num / 10);
  }

  if (reversed === x) return true;
  else return false;
}
