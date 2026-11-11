/* IL2CPP: Modules.Contexts.Home.UI.Common.Scripts.Cauldron.CauldronLevelText$$SetLevelText
void Modules_Contexts_Home_UI_Common_Scripts_Cauldron_CauldronLevelText__SetLevelText (Modules_Contexts_Home_UI_Common_Scripts_Cauldron_CauldronLevelText_o* __this, System_String_o* level, int32_t levelDifficultyType, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.UI.Common.Scripts.Cauldron.CauldronLevelText$$SetLevelText
   void Modules_Contexts_Home_UI_Common_Scripts_Cauldron_CauldronLevelText__SetLevelText
   (Modules_Contexts_Home_UI_Common_Scripts_Cauldron_CauldronLevelText_o* __this, System_String_o*
   level, int32_t levelDifficultyType, const MethodInfo* method); */

void Modules_Contexts_Home_UI_Common_Scripts_Cauldron_CauldronLevelText__SetLevelText_2983d5c
               (long param_1,undefined8 param_2,int param_3)

{
  long lVar1;
  long *plVar2;
  
                    /* try { // try from 02a83d5c to 02b83e6f has its CatchHandler @ 02a83d5c
                       catch() { ... } // from try @ 02a83d5c with catch @ 02a83d5c
                       catch() { ... } // from try @ 02a83f4c with catch @ 02a83d5c
                       catch() { ... } // from try @ 02a83fd0 with catch @ 02a83d5c
                       catch() { ... } // from try @ 02a84064 with catch @ 02a83d5c */
  if (*(long *)(param_1 + 0x18) != 0) {
    lVar1 = UnityEngine_GameObject__get_gameObject_408e764(*(long *)(param_1 + 0x18),0);
    if (lVar1 != 0) {
      UnityEngine_GameObject__SetActive_408e318(lVar1,param_3 == 0,0);
      if ((*(long *)(param_1 + 0x20) != 0) &&
         (lVar1 = UnityEngine_GameObject__get_gameObject_408e764(*(long *)(param_1 + 0x20),0),
         lVar1 != 0)) {
        UnityEngine_GameObject__SetActive_408e318(lVar1,param_3 == 1,0);
        if ((*(long *)(param_1 + 0x28) != 0) &&
           (lVar1 = UnityEngine_GameObject__get_gameObject_408e764(*(long *)(param_1 + 0x28),0),
           lVar1 != 0)) {
          UnityEngine_GameObject__SetActive_408e318(lVar1,param_3 == 2,0);
          plVar2 = *(long **)(param_1 + 0x30);
          if (plVar2 != (long *)0x0) {
            (**(code **)(*plVar2 + 0x558))(plVar2,param_2,*(undefined8 *)(*plVar2 + 0x560));
            plVar2 = *(long **)(param_1 + 0x38);
            if (plVar2 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x02a83e18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (**(code **)(*plVar2 + 0x558))(plVar2,param_2,*(undefined8 *)(*plVar2 + 0x560));
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

