# QUICK SORT
- 특정한 값을 기준으로 큰 수와 작은수로 나눈다.
- 기준값은 Pivot이라 한다.
- 재귀호출을 통하여 구현
- 시간복잡도 = N * logN(N은 데이터의 갯수) -> 평균적으로 빠르다!
- 하지만.. 최악 시간 복잡도 = N*N
- 이미 정렬이 된 데이터를 정렬할때에 Pivot으로 값을 분할하는 이점을 잃는다. (분할을 하지않음)
- 이미 정렬이 된 데이터는 삽입정렬!