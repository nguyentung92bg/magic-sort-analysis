/* IL2CPP: Modules.Contexts.Home.Collection.Scripts.UI.CollectionCardPackVisualsConfig$$GetVisual
Modules_Contexts_Home_Collection_Scripts_UI_CollectionCardPackVisualsConfig_CollectionCardPackVisual_o* Modules_Contexts_Home_Collection_Scripts_UI_CollectionCardPackVisualsConfig__GetVisual (Modules_Contexts_Home_Collection_Scripts_UI_CollectionCardPackVisualsConfig_o* __this, int32_t packId, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.Collection.Scripts.UI.CollectionCardPackVisualsConfig$$GetVisual
   Modules_Contexts_Home_Collection_Scripts_UI_CollectionCardPackVisualsConfig_CollectionCardPackVisual_o*
   Modules_Contexts_Home_Collection_Scripts_UI_CollectionCardPackVisualsConfig__GetVisual
   (Modules_Contexts_Home_Collection_Scripts_UI_CollectionCardPackVisualsConfig_o* __this, int32_t
   packId, const MethodInfo* method); */

void Modules_Contexts_Home_Collection_Scripts_UI_CollectionCardPackVisualsConfig__GetVisual_3775f58
               (long param_1,undefined4 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  
  if ((bRam0000000005c33c87 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0578ee58);
    FUN_012d0dc8(PTR_DAT_05814e70);
    FUN_012d0dc8(PTR_DAT_057ba750);
    FUN_012d0dc8(PTR_DAT_057d1a80);
    FUN_012d0dc8(PTR_DAT_057bcaf8);
    FUN_012d0dc8(PTR_DAT_057f63d8);
    FUN_012d0dc8(PTR_DAT_0576b298);
    bRam0000000005c33c87 = 1;
  }
  puVar1 = PTR_DAT_0576b298;
  plVar5 = (long *)(param_1 + 0x20);
  lVar3 = *plVar5;
  if (lVar3 == 0) {
    uVar6 = *(undefined8 *)(param_1 + 0x18);
    lVar3 = *(long *)PTR_DAT_0576b298;
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_0130472c();
      lVar3 = *(long *)puVar1;
    }
    puVar2 = PTR_DAT_057d1a80;
    lVar7 = *(long *)(*(long *)(lVar3 + 0xb8) + 8);
    if (lVar7 == 0) {
      if (*(int *)(lVar3 + 0xe0) == 0) {
        thunk_FUN_0130472c();
        lVar3 = *(long *)puVar1;
      }
      uVar8 = **(undefined8 **)(lVar3 + 0xb8);
      lVar7 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
      if (lVar7 == 0) goto LAB_0387613c;
      System_Func_object__int____ctor_3381cbc(lVar7,uVar8,*(undefined8 *)PTR_DAT_057bcaf8,0);
      plVar4 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 8);
      *plVar4 = lVar7;
      FUN_012d0d74(plVar4,lVar7);
      lVar3 = *(long *)puVar1;
    }
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_0130472c();
      lVar3 = *(long *)puVar1;
    }
    puVar2 = PTR_DAT_057ba750;
    lVar9 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x10);
    if (lVar9 == 0) {
      if (*(int *)(lVar3 + 0xe0) == 0) {
        thunk_FUN_0130472c();
        lVar3 = *(long *)puVar1;
      }
      uVar8 = **(undefined8 **)(lVar3 + 0xb8);
      lVar9 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
      if (lVar9 == 0) {
LAB_0387613c:
                    /* WARNING: Subroutine does not return */
        FUN_012d0ef0();
      }
      System_Func_object__object____ctor_33820ac(lVar9,uVar8,*(undefined8 *)PTR_DAT_057f63d8,0);
      plVar4 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x10);
      *plVar4 = lVar9;
      FUN_012d0d74(plVar4,lVar9);
    }
    lVar3 = System_Linq_Enumerable__ToDictionary_object__int__object__242ce00
                      (uVar6,lVar7,lVar9,*(undefined8 *)PTR_DAT_05814e70);
    *plVar5 = lVar3;
    FUN_012d0d74(plVar5,lVar3);
    lVar3 = *plVar5;
  }
                    /* WARNING: Could not recover jumptable at 0x0281caec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(*(long *)PTR_DAT_0578ee58 + 0x38) + 8))(lVar3,param_2,0);
  return;
}

