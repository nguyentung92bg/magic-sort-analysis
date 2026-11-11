/* IL2CPP: Modules.Contexts.Home.UI.PreGame.Scripts.PreGameAnimationConfig$$TryGetMultiplierSpriteConfig
bool Modules_Contexts_Home_UI_PreGame_Scripts_PreGameAnimationConfig__TryGetMultiplierSpriteConfig (Modules_Contexts_Home_UI_PreGame_Scripts_PreGameAnimationConfig_o* __this, int32_t difficulty, Modules_Contexts_Home_UI_PreGame_Scripts_MultiplierDifficultySpriteConfig_o** spriteConfig, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.UI.PreGame.Scripts.PreGameAnimationConfig$$TryGetMultiplierSpriteConfig
   bool 
   Modules_Contexts_Home_UI_PreGame_Scripts_PreGameAnimationConfig__TryGetMultiplierSpriteConfig
   (Modules_Contexts_Home_UI_PreGame_Scripts_PreGameAnimationConfig_o* __this, int32_t difficulty,
   Modules_Contexts_Home_UI_PreGame_Scripts_MultiplierDifficultySpriteConfig_o** spriteConfig, const
   MethodInfo* method); */

undefined8
Modules_Contexts_Home_UI_PreGame_Scripts_PreGameAnimationConfig__TryGetMultiplierSpriteConfig_2dd2d60
          (long param_1,int param_2,long *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  if ((bRam0000000005c2fcc5 & 1) == 0) {
                    /* try { // try from 02ed2d8c to 02fd2d9f has its CatchHandler @ 02ed2dac */
    FUN_012d0dc8(PTR_DAT_0575a360);
    FUN_012d0dc8(PTR_DAT_05801b28);
                    /* try { // try from 02ed2da0 to 02fd2dc3 has its CatchHandler @ 02ed2d4c */
    FUN_012d0dc8(PTR_DAT_058057c0);
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 02ed2d8c with catch @ 02ed2dac
                        */
    FUN_012d0dc8(PTR_DAT_0575ea10);
    bRam0000000005c2fcc5 = 1;
  }
  puVar2 = PTR_DAT_05801b28;
  puVar1 = PTR_DAT_0575a360;
  uStack_40 = 0;
  lStack_38 = 0;
                    /* try { // try from 02ed2dc4 to 02fd2ddb has its CatchHandler @ 02ed2e14 */
  uStack_48 = 0;
  if (*(long *)(param_1 + 0x18) != 0) {
                    /* try { // try from 02ed2ddc to 02fd2e03 has its CatchHandler @ 02ed2d4c */
    System_Collections_Generic_List_object___GetEnumerator_21fd5c8
              (&uStack_48,*(long *)(param_1 + 0x18),*(undefined8 *)PTR_DAT_0575ea10);
    while( true ) {
      uVar3 = System_Collections_Generic_List_Enumerator_object___MoveNext_3ea89a0
                        (&uStack_48,*(undefined8 *)puVar2);
      if ((uVar3 & 1) == 0) {
        System_Collections_Generic_List_Enumerator_object___Dispose_3ea899c
                  (&uStack_48,*(undefined8 *)puVar1);
        *param_3 = 0;
        FUN_012d0d74(param_3,0);
        return 0;
      }
                    /* try { // try from 02ed2e04 to 02fd2e13 has its CatchHandler @ 02ed2e14 */
      if (lStack_38 == 0) break;
                    /* catch() { ... } // from try @ 02ed2dc4 with catch @ 02ed2e14
                       catch() { ... } // from try @ 02ed2e04 with catch @ 02ed2e14 */
      if (*(int *)(lStack_38 + 0x10) == param_2) {
                    /* try { // try from 02ed2e18 to 02fd2e1b has its CatchHandler @ 02ed2e24 */
        *param_3 = lStack_38;
                    /* try { // try from 02ed2e1c to 02fd2e27 has its CatchHandler @ 02ed2d4c */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 02ed2e18 with catch @ 02ed2e24
                        */
        FUN_012d0d74(param_3,lStack_38);
        System_Collections_Generic_List_Enumerator_object___Dispose_3ea899c
                  (&uStack_48,*(undefined8 *)puVar1);
        return 1;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

