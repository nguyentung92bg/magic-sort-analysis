/* IL2CPP: Modules.Contexts.GamePlay.UI.PreLevelPopUpNS.Scripts.GamePlaySceneToHomeSceneButton$$Awake
void Modules_Contexts_GamePlay_UI_PreLevelPopUpNS_Scripts_GamePlaySceneToHomeSceneButton__Awake (Modules_Contexts_GamePlay_UI_PreLevelPopUpNS_Scripts_GamePlaySceneToHomeSceneButton_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.GamePlay.UI.PreLevelPopUpNS.Scripts.GamePlaySceneToHomeSceneButton$$Awake
   void Modules_Contexts_GamePlay_UI_PreLevelPopUpNS_Scripts_GamePlaySceneToHomeSceneButton__Awake
   (Modules_Contexts_GamePlay_UI_PreLevelPopUpNS_Scripts_GamePlaySceneToHomeSceneButton_o* __this,
   const MethodInfo* method); */

void Modules_Contexts_GamePlay_UI_PreLevelPopUpNS_Scripts_GamePlaySceneToHomeSceneButton__Awake_16eae98
               (long param_1)

{
  undefined *puVar1;
  bool bVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 017eae08 with catch @ 017eae98
                        */
  puVar1 = PTR_DAT_0578b048;
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 017eadf8 with catch @ 017eae9c
                        */
                    /* try { // try from 017eaeb4 to 018eaeb7 has its CatchHandler @ 017eaed8 */
  if ((bRam0000000005c24b1b & 1) == 0) {
                    /* try { // try from 017eaeb8 to 018eaedf has its CatchHandler @ 017eace4 */
    FUN_012d0dc8(PTR_DAT_0578b048);
    FUN_012d0dc8(PTR_DAT_0575ca28);
    bRam0000000005c24b1b = 1;
  }
                    /* catch() { ... } // from try @ 017eaeb4 with catch @ 017eaed8 */
  lVar6 = *(long *)(param_1 + 0x18);
                    /* try { // try from 017eaee0 to 018eaee7 has its CatchHandler @ 017eaefc */
  lVar3 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
                    /* try { // try from 017eaee8 to 018eaef3 has its CatchHandler @ 017eace4 */
                    /* try { // try from 017eaef4 to 018eaefb has its CatchHandler @ 017eaefc */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 017eaee0 with catch @ 017eaefc
                       catch(type#2 @ 00000000) { ... } // from try @ 017eaef4 with catch @ 017eaefc
                        */
  if ((lVar3 != 0) &&
     (System_Action___ctor_21239bc(lVar3,param_1,*(undefined8 *)PTR_DAT_0575ca28,0), lVar6 != 0)) {
    if ((bRam0000000005c3941f & 1) == 0) {
      FUN_012d0dc8(PTR_DAT_0578b048,lVar3,0);
      bRam0000000005c3941f = 1;
    }
    puVar1 = PTR_DAT_0578b048;
    plVar7 = (long *)(lVar6 + 0x38);
    lVar6 = *plVar7;
    while ((plVar4 = (long *)System_Delegate__Combine_23e3964(lVar6,lVar3,0), plVar4 == (long *)0x0
           || (*plVar4 == *(long *)puVar1))) {
      lVar5 = FUN_01351224(plVar7,plVar4,lVar6);
      bVar2 = lVar6 == lVar5;
      lVar6 = lVar5;
      if (bVar2) {
        return;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_012d1288(plVar4);
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

