/* IL2CPP: Modules.Contexts.GamePlay.Board.Common.Scripts.BottleCollection$$GetColorCount
int32_t Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection__GetColorCount (Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection_o* __this, int32_t colorId, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Board.Common.Scripts.BottleCollection$$GetColorCount
   int32_t Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection__GetColorCount
   (Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection_o* __this, int32_t colorId,
   const MethodInfo* method); */

undefined4
Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection__GetColorCount_2f6c1dc
          (long param_1,undefined4 param_2)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  undefined4 uStack_24;
  
  puVar1 = PTR_DAT_05785c18;
  if ((bRam0000000005c30933 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05785c18);
    bRam0000000005c30933 = 1;
  }
  plVar5 = *(long **)(param_1 + 0x78);
  uStack_24 = 0;
  if (plVar5 == (long *)0x0) {
    thunk_FUN_0136d790(PTR_DAT_057c1ad0);
    uVar3 = thunk_FUN_01320e48();
    FUN_0103b554();
    uVar4 = thunk_FUN_0136d790(PTR_DAT_05776d10);
    System_ArgumentNullException___ctor_211d594(uVar3,uVar4,0);
    uVar4 = thunk_FUN_0136d790(PTR_DAT_057e4d58);
                    /* WARNING: Subroutine does not return */
    FUN_012d0eb8(uVar3,uVar4);
  }
  lVar6 = **(long **)(*(long *)puVar1 + 0x38);
  if ((*(byte *)(lVar6 + 0x132) & 1) == 0) {
    lVar6 = FUN_0131942c(lVar6);
  }
  lVar7 = *plVar5;
  uVar8 = (ulong)*(ushort *)(lVar7 + 0x12a);
  if (uVar8 != 0) {
    piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) == lVar6) {
        puVar2 = (undefined8 *)(lVar7 + (long)(*piVar9 + 1) * 0x10 + 0x138);
        goto LAB_0281cfb0;
      }
      uVar8 = uVar8 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar8 != 0);
  }
  puVar2 = (undefined8 *)FUN_0131971c(plVar5,lVar6,1);
LAB_0281cfb0:
  uVar8 = (*(code *)*puVar2)(plVar5,param_2,&uStack_24,puVar2[1]);
  if ((uVar8 & 1) == 0) {
    uStack_24 = 0;
  }
  return uStack_24;
}

