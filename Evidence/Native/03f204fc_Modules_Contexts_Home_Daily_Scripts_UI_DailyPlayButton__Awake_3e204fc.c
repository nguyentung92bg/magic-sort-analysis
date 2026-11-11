/* IL2CPP: Modules.Contexts.Home.Daily.Scripts.UI.DailyPlayButton$$Awake
void Modules_Contexts_Home_Daily_Scripts_UI_DailyPlayButton__Awake (Modules_Contexts_Home_Daily_Scripts_UI_DailyPlayButton_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.Daily.Scripts.UI.DailyPlayButton$$Awake
   void Modules_Contexts_Home_Daily_Scripts_UI_DailyPlayButton__Awake
   (Modules_Contexts_Home_Daily_Scripts_UI_DailyPlayButton_o* __this, const MethodInfo* method); */

void Modules_Contexts_Home_Daily_Scripts_UI_DailyPlayButton__Awake_3e204fc(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long lVar8;
  
  puVar4 = PTR_DAT_0578b048;
  if ((bRam0000000005c38101 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0578b048);
    FUN_012d0dc8(PTR_DAT_05778bf8);
                    /* try { // try from 03f20540 to 04020567 has its CatchHandler @ 03f20680 */
    FUN_012d0dc8(PTR_DAT_057c4c18);
    FUN_012d0dc8(PTR_DAT_0576aae0);
    FUN_012d0dc8(PTR_DAT_058013a8);
    FUN_012d0dc8(PTR_DAT_057c6ef8);
    bRam0000000005c38101 = 1;
  }
  lVar8 = *(long *)(param_1 + 0x20);
  lVar5 = thunk_FUN_01320e48(*(undefined8 *)puVar4);
                    /* try { // try from 03f20580 to 04020587 has its CatchHandler @ 03f2069c */
  if ((lVar5 != 0) &&
     (System_Action___ctor_21239bc(lVar5,param_1,*(undefined8 *)PTR_DAT_058013a8,0), lVar8 != 0)) {
    Modules_Infrastructure_UI_Common_Scripts_ButtonNS_Button__add_OnSelectSuccessEvent_4005cd8
              (lVar8,lVar5,0);
    lVar8 = *(long *)(param_1 + 0x18);
    lVar5 = thunk_FUN_01320e48(*(undefined8 *)puVar4);
                    /* try { // try from 03f205d8 to 040205ff has its CatchHandler @ 03f20684 */
    if ((lVar5 != 0) &&
       (System_Action___ctor_21239bc(lVar5,param_1,*(undefined8 *)PTR_DAT_057c6ef8,0),
       puVar4 = PTR_DAT_0576aae0, lVar8 != 0)) {
      Modules_Infrastructure_UI_Common_Scripts_ButtonNS_Button__add_OnSelectSuccessEvent_4005cd8
                (lVar8,lVar5,0);
      lVar5 = **(long **)(*(long *)puVar4 + 0xb8);
      if ((lVar5 != 0) && (lVar5 = *(long *)(lVar5 + 0x18), lVar5 != 0)) {
                    /* try { // try from 03f20618 to 0402061f has its CatchHandler @ 03f206a0 */
        uVar6 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                          (lVar5,*(undefined8 *)PTR_DAT_05778bf8);
                    /* try { // try from 03f20620 to 0402065b has its CatchHandler @ 03f20348 */
        *(undefined8 *)(param_1 + 0x68) = uVar6;
        FUN_012d0d74();
        lVar5 = **(long **)(*(long *)puVar4 + 0xb8);
        if ((lVar5 != 0) && (lVar5 = *(long *)(lVar5 + 0x18), lVar5 != 0)) {
          uVar6 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                            (lVar5,*(undefined8 *)PTR_DAT_057c4c18);
          puVar7 = (undefined8 *)(param_1 + 0x70);
          *puVar7 = uVar6;
                    /* try { // try from 03f2065c to 04020663 has its CatchHandler @ 03f20684 */
                    /* try { // try from 03f20664 to 0402066b has its CatchHandler @ 03f20680 */
                    /* try { // try from 03f2066c to 0402066f has its CatchHandler @ 03f2081c */
                    /* try { // try from 03f20670 to 04020673 has its CatchHandler @ 03f2076c */
          if (iRam0000000005c3d478 != 0) {
            puVar1 = (ulong *)(((ulong)puVar7 >> 0x12 & 0x7fff) * 8 + 0x5c86b80);
            do {
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
              if (bVar3) {
                *puVar1 = *puVar1 | 1L << ((ulong)puVar7 >> 0xc & 0x3f);
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
          }
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 03f20674 to 04020677 has its CatchHandler @ 03f2067c */
  FUN_012d0ef0();
}

