/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Bottle.BottleView$$Recycle
void Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleView__Recycle (Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Bottle.BottleView$$Recycle
   void Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleView__Recycle
   (Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleView_o* __this, const MethodInfo*
   method); */

void Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleView__Recycle_22fc208(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  int *piVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  
  puVar1 = PTR_DAT_0576c200;
  if ((bRam0000000005c2a5f8 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0575a2d8);
    FUN_012d0dc8(PTR_DAT_0576c200);
    bRam0000000005c2a5f8 = 1;
  }
  uVar8 = *(undefined8 *)(param_1 + 0xe8);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  uVar2 = UnityEngine_Object__op_Inequality_408e110(uVar8,0,0);
  if ((uVar2 & 1) != 0) {
    if ((*(long *)(param_1 + 0xe8) == 0) ||
       (lVar3 = UnityEngine_Component__get_gameObject_408b480(*(long *)(param_1 + 0xe8),0),
       lVar3 == 0)) goto LAB_023fc36c;
    UnityEngine_GameObject__SetActive_408e318(lVar3,0,0);
  }
  if (*(long *)(param_1 + 0x108) != 0) {
    DG_Tweening_TweenExtensions__Kill_1edd6a4(*(long *)(param_1 + 0x108),0,0);
  }
  plVar7 = *(long **)(param_1 + 0x18);
  if (cRam0000000005c230a9 == '\0') {
    FUN_012d0dc8(PTR_DAT_05805c10);
    cRam0000000005c230a9 = '\x01';
  }
  if (plVar7 != (long *)0x0) {
    lVar3 = *plVar7;
    lVar5 = *(long *)(*(long *)PTR_DAT_05805c10 + 0xb8);
    uVar2 = (ulong)*(ushort *)(lVar3 + 0x12a);
    uVar11 = *(undefined4 *)(lVar5 + 0xc);
    uVar10 = *(undefined4 *)(lVar5 + 0x10);
    uVar9 = *(undefined4 *)(lVar5 + 0x14);
    if (uVar2 != 0) {
      piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_0575a2d8) {
          puVar4 = (undefined8 *)(lVar3 + (long)(*piVar6 + 7) * 0x10 + 0x138);
          goto LAB_023fc344;
        }
        uVar2 = uVar2 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar2 != 0);
    }
    puVar4 = (undefined8 *)FUN_0131971c(plVar7,*(long *)PTR_DAT_0575a2d8,7);
LAB_023fc344:
                    /* WARNING: Could not recover jumptable at 0x023fc368. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)*puVar4)(uVar11,uVar10,uVar9,plVar7,puVar4[1]);
    return;
  }
LAB_023fc36c:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

