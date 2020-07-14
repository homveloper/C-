// 난수 발생 함수
#define SEED 17
#define MULT 25173
#define INC  13849
#define MOD  65536

unsigned int call_count = 0;	// 전역 변수
static unsigned seed = SEED;	// 정적 전역 변수

unsigned random_i(void)
{
	seed = (MULT*seed + INC) % MOD;
	call_count++;

	return seed;
}

double random_f(void)
{
	seed = (MULT*seed + INC) % MOD;
	call_count++;

	return seed / (double) MOD;
}
