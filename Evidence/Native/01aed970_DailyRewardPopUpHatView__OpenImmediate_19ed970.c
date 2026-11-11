/* IL2CPP: DailyRewardPopUpHatView$$OpenImmediate
void DailyRewardPopUpHatView__OpenImmediate (DailyRewardPopUpHatView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: DailyRewardPopUpHatView$$OpenImmediate
   void DailyRewardPopUpHatView__OpenImmediate (DailyRewardPopUpHatView_o* __this, const MethodInfo*
   method); */

void DailyRewardPopUpHatView__OpenImmediate_19ed970(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  if ((*(long *)(param_1 + 0x18) != 0) &&
     (lVar1 = UnityEngine_Component__get_gameObject_408b480(*(long *)(param_1 + 0x18),0), lVar1 != 0
     )) {
    UnityEngine_GameObject__SetActive_408e318(lVar1,0,0);
    if (*(long *)(param_1 + 0x48) != 0) {
      lVar1 = *(long *)(param_1 + 0x30);
      uVar2 = UnityEngine_Object__get_name_4078cb0(*(long *)(param_1 + 0x48),0);
      if (lVar1 != 0) {
        if (pcRam0000000005c28c10 == (code *)0x0) {
          pcRam0000000005c28c10 = (code *)FUN_012d0d84(&UNK_0438d26b,uVar2,0);
        }
                    /* WARNING: Could not recover jumptable at 0x0207a144. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*pcRam0000000005c28c10)(lVar1,uVar2,0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

