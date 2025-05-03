function solution(s) {
    
  const chars = s.toLowerCase().split(''); 

  const pCount = chars.filter(ch => ch === 'p').length;
  const yCount = chars.filter(ch => ch === 'y').length;

  return pCount === yCount;
}
