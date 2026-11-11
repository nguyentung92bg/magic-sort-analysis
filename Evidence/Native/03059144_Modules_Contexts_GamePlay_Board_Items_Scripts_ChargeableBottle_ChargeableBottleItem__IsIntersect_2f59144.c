/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.ChargeableBottle.ChargeableBottleItem$$IsIntersect
bool Modules_Contexts_GamePlay_Board_Items_Scripts_ChargeableBottle_ChargeableBottleItem__IsIntersect (Modules_Contexts_GamePlay_Board_Items_Scripts_ChargeableBottle_ChargeableBottleItem_o* __this, UnityEngine_Vector3_o worldPosition, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.GamePlay.Board.Items.Scripts.ChargeableBottle.ChargeableBottleItem$$IsIntersect
   bool 
   Modules_Contexts_GamePlay_Board_Items_Scripts_ChargeableBottle_ChargeableBottleItem__IsIntersect
   (Modules_Contexts_GamePlay_Board_Items_Scripts_ChargeableBottle_ChargeableBottleItem_o* __this,
   UnityEngine_Vector3_o worldPosition, const MethodInfo* method); */

uint Modules_Contexts_GamePlay_Board_Items_Scripts_ChargeableBottle_ChargeableBottleItem__IsIntersect_2f59144
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,long param_4)

{
  uint uVar1;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  uStack_30 = param_1;
  uStack_2c = param_2;
  uStack_28 = param_3;
  if (pcRam0000000005c343a0 == (code *)0x0) {
    pcRam0000000005c343a0 = (code *)FUN_012d0d84(&UNK_043b245b,0);
  }
  uVar1 = (*pcRam0000000005c343a0)(param_4 + 0x68,&uStack_30);
  return uVar1 & 1;
}

