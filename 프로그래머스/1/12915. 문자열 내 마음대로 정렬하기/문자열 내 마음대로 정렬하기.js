function solution(strings, n) {
  let arr = strings.slice();

  for (let i = 0; i < arr.length - 1; i++) {
    for (let j = i + 1; j < arr.length; j++) {
      if (arr[j][n] < arr[i][n]
          || (arr[j][n] === arr[i][n] && arr[j] < arr[i])) {
        let temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
      }
    }
  }

  return arr;
}
