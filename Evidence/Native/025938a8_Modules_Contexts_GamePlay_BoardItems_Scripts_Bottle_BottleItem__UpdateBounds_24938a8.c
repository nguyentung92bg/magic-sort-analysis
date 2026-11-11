/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Bottle.BottleItem$$UpdateBounds
void Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__UpdateBounds (Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Bottle.BottleItem$$UpdateBounds
   void Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__UpdateBounds
   (Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* __this, const MethodInfo*
   method); */

void Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__UpdateBounds_24938a8
               (undefined1 param_1 [16],float param_2,long param_3)

{
  undefined *puVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  int iVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if ((bRam0000000005c2b31b & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0575a2d8);
    FUN_012d0dc8(PTR_DAT_05774380);
    FUN_012d0dc8(PTR_DAT_05802430);
    bRam0000000005c2b31b = 1;
  }
  plVar2 = (long *)Modules_Infrastructure_Common_Scripts_Component_AItem__get_Root_40e9cf4
                             (param_3,0);
  puVar1 = PTR_DAT_0575a2d8;
  if (plVar2 != (long *)0x0) {
    lVar4 = *plVar2;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12a);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_0575a2d8) {
          puVar3 = (undefined8 *)(lVar4 + (long)(*piVar6 + 0xc) * 0x10 + 0x138);
          goto LAB_02593960;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar3 = (undefined8 *)FUN_0131971c(plVar2,*(long *)PTR_DAT_0575a2d8,0xc);
LAB_02593960:
    plVar2 = (long *)(*(code *)*puVar3)(plVar2,puVar3[1]);
    if (plVar2 != (long *)0x0) {
      lVar4 = *plVar2;
      uVar5 = (ulong)*(ushort *)(lVar4 + 0x12a);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == *(long *)puVar1) {
            puVar3 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
            goto LAB_025939c0;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      puVar3 = (undefined8 *)FUN_0131971c(plVar2,*(long *)puVar1,0);
LAB_025939c0:
      fVar8 = (float)(*(code *)*puVar3)(plVar2,puVar3[1]);
      fVar10 = param_2;
      fVar9 = (float)Modules_Infrastructure_Common_Scripts_Component_AItem__GetItemLocalPosition_40e9e14
                               (param_3,0);
      lVar4 = *(long *)(param_3 + 0x50);
      if (lVar4 != 0) {
        fVar11 = *(float *)(lVar4 + 0xfc) + 2.0;
        uStack_40 = 0;
        uStack_38 = 0;
        uStack_48 = 0;
        UnityEngine_Bounds___ctor_38373f8
                  (fVar8 + fVar9,
                   *(float *)(lVar4 + 0xf8) +
                   param_2 + fVar10 + (float)*(int *)(param_3 + 0x48) * 0.5 * 0.5 + fVar11 * 0.5,0,
                   0x40000000,fVar11 + (float)*(int *)(param_3 + 0x48),0,&uStack_48,0);
        lVar4 = *(long *)(param_3 + 0x88);
        *(undefined8 *)(param_3 + 0x70) = uStack_40;
        *(undefined8 *)(param_3 + 0x68) = uStack_48;
        *(undefined8 *)(param_3 + 0x78) = uStack_38;
        puVar1 = PTR_DAT_05802430;
        if (lVar4 != 0) {
          iVar7 = 0;
          do {
            if (*(int *)(lVar4 + 0x18) <= iVar7) {
              return;
            }
            plVar2 = (long *)System_Collections_Generic_List_object___get_Item_21fc76c
                                       (lVar4,iVar7,*(undefined8 *)puVar1);
            if (plVar2 == (long *)0x0) break;
            (**(code **)(*plVar2 + 1000))(plVar2,*(undefined8 *)(*plVar2 + 0x3f0));
            lVar4 = *(long *)(param_3 + 0x88);
            iVar7 = iVar7 + 1;
          } while (lVar4 != 0);
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

