/*
 * 주어진 범위 내에서 완전제곱수의 갯수를 찾는 문제
 * 처음에는 반복문을 돌려서 모든 숫자를 sqrt 한 다음에 정수인지 아닌지 판단하는 방법으로
 * 시도했으나 인풋의 크기가 10^9인 관계로 몇몇 테스트 케이스를 통과하지 못했다.
 * 그 이후에 검색을 하여 범위에 해당하는 숫자를 먼저 sqrt 한 다음에 그 범위에 해당하는 
 * 정수의 갯수를 구하면 된다는 것을 깨달음
 * 
 * 문제의 포인트: 어떤 식으로 연산을 줄일 것인가?
 * 주어진 인풋을 최대한 줄여서 연산의 숫자를 줄임.
 */
int squares(int a, int b)
{
  // 각 범위를 sqrt 하고나면 범위의 크기가 크게 줄어들고 또
  // 매번 각 숫자가 정수인지 판단할 필요없이 그냥 범위 내의 숫자 개수만 세면 된다.
  // 반복문을 사용하지 않고도 해결가능!
  return floor(sqrt(b)) - ceil(sqrt(a)) + 1;
}