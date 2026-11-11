/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Bottle.BottleItem$$PlaySuperChargerAnimation
void Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__PlaySuperChargerAnimation (Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* __this, float speed, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Bottle.BottleItem$$PlaySuperChargerAnimation
   void Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__PlaySuperChargerAnimation
   (Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem_o* __this, float speed, const
   MethodInfo* method); */

void Modules_Contexts_GamePlay_BoardItems_Scripts_Bottle_BottleItem__PlaySuperChargerAnimation_249eac0
               (undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_2 + 0x50);
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  if ((bRam0000000005c2a604 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057ad390,0);
    bRam0000000005c2a604 = 1;
  }
  if ((*(long *)(lVar2 + 0xe8) != 0) &&
     (lVar1 = UnityEngine_Component__get_gameObject_408b480(*(long *)(lVar2 + 0xe8),0), lVar1 != 0))
  {
    UnityEngine_GameObject__SetActive_408e318(lVar1,1,0);
    if ((*(long *)(lVar2 + 0xf0) != 0) &&
       (lVar1 = UnityEngine_Animation__get_Item_1f79fb0
                          (*(long *)(lVar2 + 0xf0),*(undefined8 *)PTR_DAT_057ad390,0), lVar1 != 0))
    {
      UnityEngine_AnimationState__set_speed_1f7a570(param_1,lVar1,0);
      lVar2 = *(long *)(lVar2 + 0xf0);
      if (lVar2 != 0) {
        if (pcRam0000000005c28c08 == (code *)0x0) {
          pcRam0000000005c28c08 = (code *)FUN_012d0d84(&UNK_0438d229,0);
        }
                    /* WARNING: Could not recover jumptable at 0x0207a074. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*pcRam0000000005c28c08)(lVar2,0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

