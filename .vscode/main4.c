int main()
{
    IMateriaSource* src = new MateriaSource();
    Ice ice;
    ICharacter* me = new Character("me");
    AMateria* tmp;
    src->learnMateria(&ice);
    src->learnMateria(new Cure());
    tmp = src->createMateria("ice");
    me->equip(tmp);
    tmp = src->createMateria("ice");
    me->equip(tmp);
    me->equip(tmp);
    ICharacter* youssef = new Character("youssef");
    ICharacter* hamid = new Character("hamid");
    hamid->equip(tmp);
    hamid->equip(tmp);
    hamid->equip(tmp);
    hamid->equip(tmp);
    delete hamid;
    youssef->equip(tmp);
    youssef->equip(tmp);
    youssef->equip(tmp);
    tmp = src->createMateria("cure");
    me->equip(tmp);
    tmp = src->createMateria("cure");
    me->equip(tmp);
    tmp = src->createMateria("cure");
    me->equip(tmp);
    me->unequip(2);
    ICharacter* bob = new Character("bob");
    me->use(0, *bob);
    me->use(1, *bob);
    me->use(2, *bob);
    me->use(3, *bob);
    delete youssef;
    delete bob;
    delete me;
    delete src;
    return 0;
}