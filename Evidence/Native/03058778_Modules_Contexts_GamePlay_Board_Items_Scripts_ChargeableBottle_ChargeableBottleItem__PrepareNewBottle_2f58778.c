/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.ChargeableBottle.ChargeableBottleItem$$PrepareNewBottle
void Modules_Contexts_GamePlay_Board_Items_Scripts_ChargeableBottle_ChargeableBottleItem__PrepareNewBottle (Modules_Contexts_GamePlay_Board_Items_Scripts_ChargeableBottle_ChargeableBottleItem_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.GamePlay.Board.Items.Scripts.ChargeableBottle.ChargeableBottleItem$$PrepareNewBottle
   void 
   Modules_Contexts_GamePlay_Board_Items_Scripts_ChargeableBottle_ChargeableBottleItem__PrepareNewBottle
   (Modules_Contexts_GamePlay_Board_Items_Scripts_ChargeableBottle_ChargeableBottleItem_o* __this,
   const MethodInfo* method); */

void Modules_Contexts_GamePlay_Board_Items_Scripts_ChargeableBottle_ChargeableBottleItem__PrepareNewBottle_2f58778
               (long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  int iVar5;
  float fVar6;
  
  if ((bRam0000000005c308bb & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05785490);
    FUN_012d0dc8(PTR_DAT_057c31c0);
    FUN_012d0dc8(PTR_DAT_057815e0);
    FUN_012d0dc8(PTR_DAT_057606c8);
    bRam0000000005c308bb = 1;
  }
  puVar2 = PTR_DAT_057815e0;
  puVar1 = PTR_DAT_057606c8;
  iVar5 = *(int *)(param_1 + 0x58);
  if (iVar5 < 1) {
    if ((*(long *)(param_1 + 0x50) != 0) &&
       (lVar3 = *(long *)(*(long *)(param_1 + 0x50) + 0x40), lVar3 != 0)) {
      Modules_Infrastructure_Common_Scripts_Component_Lock__LockBy_40eac50(lVar3,param_1,0);
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_0130472c();
      }
      uVar4 = DG_Tweening_DOTween__Sequence_1eda154(0);
      lVar3 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
      if (lVar3 != 0) {
        DG_Tweening_TweenCallback___ctor_1ed6da8(lVar3,param_1,*(undefined8 *)PTR_DAT_05785490,0);
        DG_Tweening_TweenSettingsExtensions__InsertCallback_1eee154(0,uVar4,lVar3,0);
        if ((*(long *)(param_1 + 0x48) != 0) &&
           (lVar3 = *(long *)(*(long *)(param_1 + 0x48) + 0x48), lVar3 != 0)) {
          fVar6 = *(float *)(lVar3 + 0x2c);
          lVar3 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
          if (lVar3 != 0) {
            DG_Tweening_TweenCallback___ctor_1ed6da8
                      (lVar3,param_1,*(undefined8 *)PTR_DAT_057c31c0,0);
            DG_Tweening_TweenSettingsExtensions__InsertCallback_1eee154(fVar6 + 0.0,uVar4,lVar3,0);
            iVar5 = *(int *)(param_1 + 0x58);
            goto LAB_030588c0;
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
LAB_030588c0:
  *(int *)(param_1 + 0x58) = iVar5 + 1;
  return;
}

