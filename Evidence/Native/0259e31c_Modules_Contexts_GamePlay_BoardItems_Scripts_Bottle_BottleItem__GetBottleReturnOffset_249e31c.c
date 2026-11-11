/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Bottle.BottleItem$$GetBottleReturnOffset
UnityEngine_Vector3_o Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__GetBottleReturnOffset (Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Bottle.BottleItem$$GetBottleReturnOffset
   UnityEngine_Vector3_o
   Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__GetBottleReturnOffset
   (Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* __this, const MethodInfo*
   method); */

undefined1  [16]
Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__GetBottleReturnOffset_249e31c
          (long param_1)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 extraout_s0;
  undefined4 uVar8;
  undefined4 extraout_var;
  undefined8 uVar9;
  undefined8 extraout_var_00;
  undefined1 auVar7 [16];
  
  if ((bRam0000000005c2b321 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05774380);
    FUN_012d0dc8(PTR_DAT_05802430);
    bRam0000000005c2b321 = 1;
  }
  puVar1 = PTR_DAT_05802430;
  lVar2 = *(long *)(param_1 + 0x88);
  if (lVar2 != 0) {
    iVar5 = 0;
    do {
      if (*(int *)(lVar2 + 0x18) <= iVar5) {
        if (cRam0000000005c230aa == '\0') {
          FUN_012d0dc8(PTR_DAT_05805c10);
          cRam0000000005c230aa = '\x01';
        }
        uVar6 = **(undefined4 **)(*(long *)PTR_DAT_05805c10 + 0xb8);
        uVar8 = 0;
        uVar9 = 0;
LAB_0259e40c:
        auVar7._4_4_ = uVar8;
        auVar7._0_4_ = uVar6;
        auVar7._8_8_ = uVar9;
        return auVar7;
      }
      plVar3 = (long *)System_Collections_Generic_List_object___get_Item_21fc76c
                                 (lVar2,iVar5,*(undefined8 *)puVar1);
      if (plVar3 == (long *)0x0) break;
      uVar4 = (**(code **)(*plVar3 + 0x408))(plVar3,*(undefined8 *)(*plVar3 + 0x410));
      if ((uVar4 & 1) != 0) {
        if ((*(long *)(param_1 + 0x88) != 0) &&
           (plVar3 = (long *)System_Collections_Generic_List_object___get_Item_21fc76c
                                       (*(long *)(param_1 + 0x88),iVar5,*(undefined8 *)puVar1),
           plVar3 != (long *)0x0)) {
          (**(code **)(*plVar3 + 0x3f8))(plVar3,*(undefined8 *)(*plVar3 + 0x400));
          uVar6 = extraout_s0;
          uVar8 = extraout_var;
          uVar9 = extraout_var_00;
          goto LAB_0259e40c;
        }
        break;
      }
      lVar2 = *(long *)(param_1 + 0x88);
      iVar5 = iVar5 + 1;
    } while (lVar2 != 0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

