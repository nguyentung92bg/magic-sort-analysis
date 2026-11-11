/* IL2CPP: Modules.Contexts.Application.Player.Scripts.LevelTextView$$UpdateLevelText
void Modules_Contexts_Application_Player_Scripts_LevelTextView__UpdateLevelText (Modules_Contexts_Application_Player_Scripts_LevelTextView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Application.Player.Scripts.LevelTextView$$UpdateLevelText
   void Modules_Contexts_Application_Player_Scripts_LevelTextView__UpdateLevelText
   (Modules_Contexts_Application_Player_Scripts_LevelTextView_o* __this, const MethodInfo* method);
    */

void Modules_Contexts_Application_Player_Scripts_LevelTextView__UpdateLevelText_3cecc70
               (long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  ulong uVar9;
  int *piVar10;
  long *plVar11;
  int iStack_48;
  undefined4 uStack_44;
  
  puVar1 = PTR_DAT_0576aae0;
  if ((bRam0000000005c370fe & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057a1e60);
    FUN_012d0dc8(PTR_DAT_0576aae0);
                    /* try { // try from 03deccb4 to 03eeccbb has its CatchHandler @ 03dece48 */
    FUN_012d0dc8(PTR_DAT_057bc5e8);
    FUN_012d0dc8(PTR_DAT_057636d0);
                    /* try { // try from 03decccc to 03eeccd3 has its CatchHandler @ 03dece44 */
    FUN_012d0dc8(PTR_DAT_057db748);
    FUN_012d0dc8(PTR_DAT_057c9ca0);
                    /* try { // try from 03decce4 to 03eeccef has its CatchHandler @ 03dece40 */
    FUN_012d0dc8(PTR_DAT_0576e4b8);
    bRam0000000005c370fe = 1;
  }
  puVar2 = PTR_DAT_057bc5e8;
  uStack_44 = 0;
                    /* try { // try from 03decd08 to 03eecd0f has its CatchHandler @ 03dece20 */
  if ((**(long **)(*(long *)puVar1 + 0xb8) != 0) &&
     (lVar4 = *(long *)(**(long **)(*(long *)puVar1 + 0xb8) + 0x18), lVar4 != 0)) {
                    /* try { // try from 03decd1c to 03eecd3b has its CatchHandler @ 03dece28 */
    plVar5 = (long *)Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                               (lVar4,*(undefined8 *)PTR_DAT_057a1e60);
    plVar11 = *(long **)(param_1 + 0x18);
    uVar6 = *(undefined8 *)(param_1 + 0x20);
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_0130472c(*(long *)puVar2);
    }
                    /* try { // try from 03decd50 to 03eecd57 has its CatchHandler @ 03dece3c */
    uVar6 = Modules_Infrastructure_Utils_GrandStringExtensions__Localize_3de2900(uVar6,0);
    puVar3 = PTR_DAT_057db748;
    puVar2 = PTR_DAT_0576e4b8;
    puVar1 = PTR_DAT_057636d0;
    if (plVar5 != (long *)0x0) {
      lVar4 = *plVar5;
                    /* try { // try from 03decd64 to 03eecd83 has its CatchHandler @ 03decec4 */
      uVar9 = (ulong)*(ushort *)(lVar4 + 0x12a);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_057636d0) {
                    /* try { // try from 03decdbc to 03eecdc3 has its CatchHandler @ 03dece14 */
            puVar7 = (undefined8 *)(lVar4 + (long)(*piVar10 + 1) * 0x10 + 0x138);
            goto LAB_03decdc4;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
                    /* try { // try from 03decda0 to 03eecda3 has its CatchHandler @ 03ded00c */
        } while (uVar9 != 0);
      }
                    /* try { // try from 03decda4 to 03eecda7 has its CatchHandler @ 03dece18 */
                    /* try { // try from 03decda8 to 03eecdab has its CatchHandler @ 03dece0c */
                    /* try { // try from 03decdac to 03eecdaf has its CatchHandler @ 03dece08 */
      puVar7 = (undefined8 *)FUN_0131971c(plVar5,*(long *)PTR_DAT_057636d0,1);
                    /* try { // try from 03decdb0 to 03eecdb7 has its CatchHandler @ 03dece38 */
LAB_03decdc4:
                    /* try { // try from 03decdc8 to 03eecddf has its CatchHandler @ 03dece10 */
      iStack_48 = (*(code *)*puVar7)(plVar5,puVar7[1]);
      iStack_48 = *(int *)(param_1 + 0x30) + iStack_48;
                    /* try { // try from 03decde0 to 03eecde3 has its CatchHandler @ 03dece04 */
                    /* try { // try from 03decde4 to 03eecde7 has its CatchHandler @ 03dece00 */
                    /* try { // try from 03decde8 to 03eecdef has its CatchHandler @ 03dece24 */
      uVar8 = thunk_FUN_01320a8c(*(undefined8 *)puVar3,&iStack_48);
                    /* try { // try from 03decdf0 to 03eecdf3 has its CatchHandler @ 03decdfc */
                    /* try { // try from 03decdf4 to 03eecdf7 has its CatchHandler @ 03dece48 */
                    /* try { // try from 03decdf8 to 03eecdfb has its CatchHandler @ 03dece1c */
                    /* catch() { ... } // from try @ 03decdf0 with catch @ 03decdfc
                       try { // try from 03decdfc to 03eece73 has its CatchHandler @ 03dec6d4 */
                    /* catch() { ... } // from try @ 03decde4 with catch @ 03dece00 */
                    /* catch() { ... } // from try @ 03decde0 with catch @ 03dece04 */
      uVar6 = System_String__Format_1ed15fc
                        (*(undefined8 *)puVar2,uVar6,uVar8,*(undefined8 *)(param_1 + 0x28),0);
      puVar2 = PTR_DAT_057c9ca0;
                    /* catch() { ... } // from try @ 03decdac with catch @ 03dece08 */
      if (plVar11 != (long *)0x0) {
                    /* catch() { ... } // from try @ 03decda8 with catch @ 03dece0c */
                    /* catch() { ... } // from try @ 03decdc8 with catch @ 03dece10 */
                    /* catch() { ... } // from try @ 03decb94 with catch @ 03dece14
                       catch() { ... } // from try @ 03decdbc with catch @ 03dece14 */
                    /* catch() { ... } // from try @ 03decda4 with catch @ 03dece18 */
                    /* catch() { ... } // from try @ 03decc40 with catch @ 03dece1c
                       catch() { ... } // from try @ 03decdf8 with catch @ 03dece1c */
                    /* catch() { ... } // from try @ 03decd08 with catch @ 03dece20 */
                    /* catch() { ... } // from try @ 03decbf4 with catch @ 03dece24
                       catch() { ... } // from try @ 03decde8 with catch @ 03dece24 */
                    /* catch() { ... } // from try @ 03decd1c with catch @ 03dece28 */
        (**(code **)(*plVar11 + 0x558))(plVar11,uVar6,*(undefined8 *)(*plVar11 + 0x560));
                    /* catch() { ... } // from try @ 03decb68 with catch @ 03dece38
                       catch() { ... } // from try @ 03decdb0 with catch @ 03dece38 */
                    /* catch() { ... } // from try @ 03decd50 with catch @ 03dece3c */
                    /* catch() { ... } // from try @ 03decce4 with catch @ 03dece40 */
        uVar9 = System_String__op_Equality_1ec12e0
                          (*(undefined8 *)(param_1 + 0x20),**(undefined8 **)(*(long *)puVar2 + 0xb8)
                           ,0);
                    /* catch() { ... } // from try @ 03decccc with catch @ 03dece44 */
                    /* catch() { ... } // from try @ 03deccb4 with catch @ 03dece48
                       catch() { ... } // from try @ 03decdf4 with catch @ 03dece48 */
                    /* catch() { ... } // from try @ 03decbd4 with catch @ 03dece4c */
                    /* catch() { ... } // from try @ 03decbc8 with catch @ 03dece50 */
                    /* catch() { ... } // from try @ 03decba4 with catch @ 03dece54 */
        if (((uVar9 & 1) != 0) &&
           (uVar9 = System_String__op_Equality_1ec12e0
                              (*(undefined8 *)(param_1 + 0x28),
                               **(undefined8 **)(*(long *)puVar2 + 0xb8),0), (uVar9 & 1) != 0)) {
          lVar4 = *plVar5;
          plVar11 = *(long **)(param_1 + 0x18);
          uVar9 = (ulong)*(ushort *)(lVar4 + 0x12a);
                    /* try { // try from 03dece74 to 03eece77 has its CatchHandler @ 03deceb4 */
          if (uVar9 != 0) {
            piVar10 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
            do {
              if (*(long *)(piVar10 + -2) == *(long *)puVar1) {
                    /* catch() { ... } // from try @ 03dece74 with catch @ 03deceb4
                       try { // try from 03deceb4 to 03eeceef has its CatchHandler @ 03dec6d4 */
                puVar7 = (undefined8 *)(lVar4 + (long)(*piVar10 + 1) * 0x10 + 0x138);
                goto LAB_03deceb8;
              }
              uVar9 = uVar9 - 1;
              piVar10 = piVar10 + 4;
            } while (uVar9 != 0);
          }
                    /* try { // try from 03dece98 to 03eeceb3 has its CatchHandler @ 03ded0ec */
          puVar7 = (undefined8 *)FUN_0131971c(plVar5,*(long *)puVar1,1);
LAB_03deceb8:
          uStack_44 = (*(code *)*puVar7)(plVar5,puVar7[1]);
                    /* catch() { ... } // from try @ 03decd64 with catch @ 03decec4 */
                    /* catch() { ... } // from try @ 03decb48 with catch @ 03decec8 */
                    /* catch() { ... } // from try @ 03decb08 with catch @ 03dececc */
                    /* catch() { ... } // from try @ 03decab4 with catch @ 03deced0 */
          uVar6 = System_Int32__ToString_26c9768(&uStack_44,0);
                    /* catch() { ... } // from try @ 03decae4 with catch @ 03deced4 */
          if (plVar11 == (long *)0x0) goto LAB_03decf08;
          (**(code **)(*plVar11 + 0x558))(plVar11,uVar6,*(undefined8 *)(*plVar11 + 0x560));
        }
                    /* try { // try from 03decef0 to 03eecf07 has its CatchHandler @ 03decf7c */
        return;
      }
    }
  }
LAB_03decf08:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

