void InitializeCriticalSection(u32 *cs){
	*cs=0;
}

void EnterCriticalSection(u32 *cs){
	while(!TryEnterCriticalSection(cs))
		pthread_yield();
}

int TryEnterCriticalSection(u32 *cs){
	u32 __new=1,ret=0;

	__asm__ __volatile__(
		"xorl %%eax,%%eax\n"
		"lock cmpxchg %2,%1\n"
		"setzb %0\n"
		: "=m"(ret) : "m" (*cs),"r"(__new) : "rax"
	);
	return ret;
}

void LeaveCriticalSection(u32 *cs){
	*cs=0;
}

u32 InterlockedExchange(u32 *Target,u32 Value){
    __asm__ __volatile__(
        "mov %0,%%eax\n"
        "lock xchg %%eax,%1\n"
        "mov %%eax,%0\n"
        : "=m" (Value) : "m" (Target) : "rax"
    );
    return Value;
}
