/*
 * Вам дана следующая иерархия классов:
 */

struct Base { /* ... */};
struct D1 : Base { /* ... */ };
struct D2 : Base { /* ... */ };
struct D3 : D1, D2 { /* ... */ };

/*
 * Напишите функцию D1BaseToD2Base, которая преобразует
 * указатель типа Base на объект типа D3,
 * который ссылается на экземпляр Base, соответствующий D1,
 * в указатель, ссылающийся на экземпляр Base соответствующий D2.
 * Указание: не забывайте про константность!
 */

// base указывает на экземпляр Base, соответствующий D1
// нужно вернуть указатель на экземпляр Base, соответствующий D2
Base const *D1BaseToD2Base(Base const *base)
{
    D1* const d1_ptr = (D1*)base;
    D3* const d3_ptr = (D3*)d1_ptr;
    D2* const d2_ptr = (D2*)d3_ptr;
    Base* const base2 = (Base*)d2_ptr;
    return base2;

    // Короткая альтернатива
    return (D2*)(D3*)(D1*) base;
}
