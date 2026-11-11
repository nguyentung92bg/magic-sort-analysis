/* IL2CPP: Modules.Contexts.Home.Daily.Scripts.UI.DailyCoinCurrencySpriteSetter$$SetCoinSprite
void Modules_Contexts_Home_Daily_Scripts_UI_DailyCoinCurrencySpriteSetter__SetCoinSprite (Modules_Contexts_Home_Daily_Scripts_UI_DailyCoinCurrencySpriteSetter_o* __this, bool isBig, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.Daily.Scripts.UI.DailyCoinCurrencySpriteSetter$$SetCoinSprite
   void Modules_Contexts_Home_Daily_Scripts_UI_DailyCoinCurrencySpriteSetter__SetCoinSprite
   (Modules_Contexts_Home_Daily_Scripts_UI_DailyCoinCurrencySpriteSetter_o* __this, bool isBig,
   const MethodInfo* method); */

void Modules_Contexts_Home_Daily_Scripts_UI_DailyCoinCurrencySpriteSetter__SetCoinSprite_3e1db7c
               (long param_1,uint param_2)

{
  long lVar1;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    lVar1 = UnityEngine_Component__get_gameObject_408b480(*(long *)(param_1 + 0x18),0);
    if (lVar1 != 0) {
      UnityEngine_GameObject__SetActive_408e318(lVar1,param_2 & 1,0);
                    /* try { // try from 03f1dbb4 to 0401dbc3 has its CatchHandler @ 03f1dbc4 */
      if ((*(long *)(param_1 + 0x20) != 0) &&
         (lVar1 = UnityEngine_Component__get_gameObject_408b480(*(long *)(param_1 + 0x20),0),
         lVar1 != 0)) {
                    /* catch() { ... } // from try @ 03f1db38 with catch @ 03f1dbc4
                       catch() { ... } // from try @ 03f1dbb4 with catch @ 03f1dbc4 */
                    /* try { // try from 03f1dbc8 to 0401dbcb has its CatchHandler @ 03f1dbd4 */
                    /* try { // try from 03f1dbcc to 0401dbd7 has its CatchHandler @ 03f1d5a0 */
                    /* catch() { ... } // from try @ 03f1dad8 with catch @ 03f1dbd4
                       catch() { ... } // from try @ 03f1dbc8 with catch @ 03f1dbd4 */
        if (pcRam0000000005c3a388 == (code *)0x0) {
          pcRam0000000005c3a388 = (code *)FUN_012d0d84(&UNK_043edeb4);
        }
                    /* WARNING: Could not recover jumptable at 0x0418e358. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*pcRam0000000005c3a388)(lVar1,~param_2 & 1);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

