/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Snitch.SnitchItemView$$PlaySnitchWingAnimation
void Modules_Contexts_GamePlay_Board_Items_Scripts_Snitch_SnitchItemView__PlaySnitchWingAnimation (Modules_Contexts_GamePlay_Board_Items_Scripts_Snitch_SnitchItemView_o* __this, int32_t snitchIndex, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.GamePlay.Board.Items.Scripts.Snitch.SnitchItemView$$PlaySnitchWingAnimation
   void Modules_Contexts_GamePlay_Board_Items_Scripts_Snitch_SnitchItemView__PlaySnitchWingAnimation
   (Modules_Contexts_GamePlay_Board_Items_Scripts_Snitch_SnitchItemView_o* __this, int32_t
   snitchIndex, const MethodInfo* method); */

void Modules_Contexts_GamePlay_Board_Items_Scripts_Snitch_SnitchItemView__PlaySnitchWingAnimation_2611ce8
               (long param_1,undefined4 param_2)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 uVar3;
  
  if (*(int *)(param_1 + 0x100) == 0) {
    if ((*(long *)(param_1 + 0x68) == 0) ||
       (lVar2 = UnityEngine_Component__get_gameObject_408b480(*(long *)(param_1 + 0x68),0),
       lVar2 == 0)) goto LAB_02711d98;
    UnityEngine_GameObject__SetActive_408e318(lVar2,1,0);
    if (*(long *)(param_1 + 0x68) == 0) goto LAB_02711d98;
    uVar3 = UnityEngine_Behaviour__set_enabled_408d778(*(long *)(param_1 + 0x68),1,0);
    lVar2 = *(long *)(param_1 + 0x68);
  }
  else {
    if ((*(long *)(param_1 + 0x70) == 0) ||
       (lVar2 = UnityEngine_Component__get_gameObject_408b480(*(long *)(param_1 + 0x70),0),
       lVar2 == 0)) goto LAB_02711d98;
    UnityEngine_GameObject__SetActive_408e318(lVar2,1,0);
    if (*(long *)(param_1 + 0x70) == 0) goto LAB_02711d98;
    uVar3 = UnityEngine_Behaviour__set_enabled_408d778(*(long *)(param_1 + 0x70),1,0);
    lVar2 = *(long *)(param_1 + 0x70);
  }
  uVar3 = Modules_Contexts_GamePlay_Board_Items_Scripts_Snitch_SnitchItemView__GetRiseWingAnimation_260e788
                    (uVar3,param_2);
  if (lVar2 != 0) {
    if (pcRam0000000005c28b88 == (code *)0x0) {
      pcRam0000000005c28b88 = (code *)FUN_012d0d84(&UNK_0438cf2c,uVar3,0xffffffff);
    }
    uVar1 = (*pcRam0000000005c28b88)(uVar3);
    if (pcRam0000000005c28b70 == (code *)0x0) {
      pcRam0000000005c28b70 = (code *)FUN_012d0d84(&UNK_0438ce84);
    }
                    /* WARNING: Could not recover jumptable at 0x02079af8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam0000000005c28b70)(0xff800000,lVar2,uVar1,0xffffffff);
    return;
  }
LAB_02711d98:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

