/* IL2CPP: Modules.Contexts.GamePlay.Board.Common.Scripts.BottleCollection$$ConvertColorIds
System_Collections_Generic_List_ColorId__o* Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection__ConvertColorIds (Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection_o* __this, System_Collections_Generic_List_ColorId__o* colorIds, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Board.Common.Scripts.BottleCollection$$ConvertColorIds
   System_Collections_Generic_List_ColorId__o*
   Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection__ConvertColorIds
   (Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection_o* __this,
   System_Collections_Generic_List_ColorId__o* colorIds, const MethodInfo* method); */

long Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection__ConvertColorIds_2f6346c
               (undefined8 param_1,long param_2)

{
  undefined4 uVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  undefined8 uStack_78;
  undefined8 uStack_70;
  ulong uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  
  puVar3 = PTR_DAT_05805bc0;
                    /* try { // try from 03063488 to 0316348f has its CatchHandler @ 03063640 */
  if ((bRam0000000005c30908 & 1) == 0) {
                    /* try { // try from 030634a4 to 031634bb has its CatchHandler @ 03063648 */
    FUN_012d0dc8(PTR_DAT_05817840);
    FUN_012d0dc8(PTR_DAT_057d60c8);
    FUN_012d0dc8(PTR_DAT_057d4150);
    FUN_012d0dc8(PTR_DAT_05814878);
    FUN_012d0dc8(PTR_DAT_057f6050);
    FUN_012d0dc8(PTR_DAT_057b99d0);
    FUN_012d0dc8(PTR_DAT_05805bc0);
    bRam0000000005c30908 = 1;
  }
  uStack_58 = 0;
  uStack_50 = 0;
  uStack_60 = 0;
  lVar6 = thunk_FUN_01320e48(*(undefined8 *)puVar3);
                    /* try { // try from 03063510 to 03163517 has its CatchHandler @ 0306363c */
  if ((lVar6 != 0) &&
     (System_Collections_Generic_List_Int32Enum____ctor_20512f0
                (lVar6,*(undefined8 *)PTR_DAT_057b99d0), puVar5 = PTR_DAT_05817840,
     puVar4 = PTR_DAT_05814878, puVar3 = PTR_DAT_057d60c8, param_2 != 0)) {
                    /* try { // try from 0306352c to 03163543 has its CatchHandler @ 03063644 */
    System_Collections_Generic_List_Int32Enum___GetEnumerator_2052720
              (&uStack_78,param_2,*(undefined8 *)PTR_DAT_057f6050);
    uStack_58 = uStack_70;
    uStack_60 = uStack_78;
    uStack_50 = uStack_68;
    while( true ) {
      uVar7 = System_Collections_Generic_List_Enumerator_Int32Enum___MoveNext_3ea568c
                        (&uStack_60,*(undefined8 *)puVar3);
      if ((uVar7 & 1) == 0) {
        System_Collections_Generic_List_Enumerator_Int32Enum___Dispose_3ea5688
                  (&uStack_60,*(undefined8 *)puVar5);
                    /* try { // try from 03063600 to 03163603 has its CatchHandler @ 03063650 */
                    /* try { // try from 03063604 to 03163607 has its CatchHandler @ 03063630 */
        return lVar6;
      }
      lVar8 = Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection__GetColorAndColorId_2f62dbc
                        (param_1,uStack_50 & 0xffffffff);
      if (lVar8 == 0) break;
      uVar1 = *(undefined4 *)(lVar8 + 0x70);
      lVar8 = *(long *)(lVar6 + 0x10);
      lVar9 = *(long *)puVar4;
      *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
                    /* try { // try from 0306359c to 031635a3 has its CatchHandler @ 03063638 */
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_012d0ef0();
      }
      uVar2 = *(uint *)(lVar6 + 0x18);
                    /* try { // try from 030635a4 to 031635ff has its CatchHandler @ 03063044 */
      if (uVar2 < *(uint *)(lVar8 + 0x18)) {
        *(uint *)(lVar6 + 0x18) = uVar2 + 1;
        *(undefined4 *)(lVar8 + (long)(int)uVar2 * 4 + 0x20) = uVar1;
      }
      else {
        (**(code **)(*(long *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x58) + 8))(lVar6);
      }
    }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 03063608 to 0316360f has its CatchHandler @ 03063640 */
    FUN_012d0ef0();
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 03063610 to 03163613 has its CatchHandler @ 0306362c */
  FUN_012d0ef0();
}

