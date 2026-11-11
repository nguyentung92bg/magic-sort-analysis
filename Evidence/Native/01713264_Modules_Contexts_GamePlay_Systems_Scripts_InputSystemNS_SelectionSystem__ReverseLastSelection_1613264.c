/* IL2CPP: Modules.Contexts.GamePlay.Systems.Scripts.InputSystemNS.SelectionSystem$$ReverseLastSelection
DG_Tweening_Tween_o* Modules_Contexts_GamePlay_Systems_Scripts_InputSystemNS_SelectionSystem__ReverseLastSelection (Modules_Contexts_GamePlay_Systems_Scripts_InputSystemNS_SelectionSystem_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.GamePlay.Systems.Scripts.InputSystemNS.SelectionSystem$$ReverseLastSelection
   DG_Tweening_Tween_o*
   Modules_Contexts_GamePlay_Systems_Scripts_InputSystemNS_SelectionSystem__ReverseLastSelection
   (Modules_Contexts_GamePlay_Systems_Scripts_InputSystemNS_SelectionSystem_o* __this, const
   MethodInfo* method); */

undefined8
Modules_Contexts_GamePlay_Systems_Scripts_InputSystemNS_SelectionSystem__ReverseLastSelection_1613264
          (long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  long *plVar10;
  undefined8 uVar11;
  
  if ((bRam0000000005c2448b & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057815e0);
    FUN_012d0dc8(PTR_DAT_057df868);
    FUN_012d0dc8(PTR_DAT_057dac98);
    FUN_012d0dc8(PTR_DAT_057e1a68);
    bRam0000000005c2448b = 1;
  }
  lVar6 = *(long *)(param_1 + 0x28);
  if (lVar6 != 0) {
    if (*(int *)(lVar6 + 0x18) == 0) {
      if (*(int *)(*(long *)PTR_DAT_057815e0 + 0xe0) == 0) {
        thunk_FUN_0130472c();
      }
      puVar2 = PTR_DAT_057815e0;
      if ((bRam0000000005c28425 & 1) == 0) {
        FUN_012d0dc8(PTR_DAT_057815e0);
        FUN_012d0dc8(PTR_DAT_058163b8);
        bRam0000000005c28425 = 1;
      }
      puVar3 = PTR_DAT_058163b8;
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_0130472c();
      }
      DG_Tweening_DOTween__InitCheck_1ed8408();
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_0130472c();
      }
      uVar5 = DG_Tweening_Core_TweenManager__GetSequence_332f540(0);
      DG_Tweening_Sequence__Setup_1eda1dc();
      return uVar5;
    }
    lVar6 = System_Collections_Generic_List_object___get_Item_21fc76c
                      (lVar6,*(int *)(lVar6 + 0x18) + -1,*(undefined8 *)PTR_DAT_057e1a68);
    lVar7 = *(long *)(param_1 + 0x28);
    if ((lVar7 != 0) &&
       (System_Collections_Generic_List_object___RemoveAt_21fe320
                  (lVar7,*(int *)(lVar7 + 0x18) + -1,*(undefined8 *)PTR_DAT_057df868), lVar6 != 0))
    {
      if ((bRam0000000005c24484 & 1) == 0) {
        FUN_012d0dc8(PTR_DAT_05808e00);
        bRam0000000005c24484 = 1;
      }
      plVar10 = *(long **)(lVar6 + 0x40);
      if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_012d0ef0();
      }
      lVar7 = *plVar10;
      uVar5 = *(undefined8 *)(lVar6 + 0x10);
      uVar1 = *(undefined8 *)(lVar6 + 0x18);
      uVar11 = *(undefined8 *)(lVar6 + 0x30);
      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12a);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_05808e00) {
            puVar4 = (undefined8 *)(lVar7 + (long)(*piVar9 + 3) * 0x10 + 0x138);
            goto LAB_01712fb4;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar4 = (undefined8 *)FUN_0131971c(plVar10,*(long *)PTR_DAT_05808e00,3);
LAB_01712fb4:
                    /* WARNING: Could not recover jumptable at 0x01712fd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar5 = (*(code *)*puVar4)(plVar10,lVar6,uVar5,uVar1,uVar11,puVar4[1]);
      return uVar5;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

