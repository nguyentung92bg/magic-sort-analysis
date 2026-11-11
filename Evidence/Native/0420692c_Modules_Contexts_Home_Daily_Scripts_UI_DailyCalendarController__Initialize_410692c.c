/* IL2CPP: Modules.Contexts.Home.Daily.Scripts.UI.DailyCalendarController$$Initialize
void Modules_Contexts_Home_Daily_Scripts_UI_DailyCalendarController__Initialize (Modules_Contexts_Home_Daily_Scripts_UI_DailyCalendarController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.Daily.Scripts.UI.DailyCalendarController$$Initialize
   void Modules_Contexts_Home_Daily_Scripts_UI_DailyCalendarController__Initialize
   (Modules_Contexts_Home_Daily_Scripts_UI_DailyCalendarController_o* __this, const MethodInfo*
   method); */

void Modules_Contexts_Home_Daily_Scripts_UI_DailyCalendarController__Initialize_410692c
               (long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
                    /* try { // try from 04206934 to 0430693b has its CatchHandler @ 042069c8 */
  if ((bRam0000000005c3aba4 & 1) == 0) {
                    /* try { // try from 04206950 to 04306953 has its CatchHandler @ 042069c4 */
                    /* try { // try from 04206954 to 043069b7 has its CatchHandler @ 04206868 */
    FUN_012d0dc8(PTR_DAT_0579e448);
    FUN_012d0dc8(PTR_DAT_057a2c68);
    FUN_012d0dc8(PTR_DAT_0580fc28);
    FUN_012d0dc8(PTR_DAT_0580f2f0);
    bRam0000000005c3aba4 = 1;
  }
  puVar2 = PTR_DAT_057a2c68;
  puVar1 = PTR_DAT_0579e448;
  uStack_40 = 0;
  lStack_38 = 0;
  uStack_48 = 0;
  if (*(long *)(param_1 + 0x18) != 0) {
    System_Collections_Generic_List_object___GetEnumerator_21fd5c8
              (&uStack_48,*(long *)(param_1 + 0x18),*(undefined8 *)PTR_DAT_0580f2f0);
    while( true ) {
                    /* try { // try from 042069b8 to 043069bb has its CatchHandler @ 042069c0 */
                    /* try { // try from 042069bc to 043069df has its CatchHandler @ 04206868 */
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 042069b8 with catch @ 042069c0
                        */
      uVar4 = System_Collections_Generic_List_Enumerator_object___MoveNext_3ea89a0
                        (&uStack_48,*(undefined8 *)puVar2);
      lVar3 = lStack_38;
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 04206950 with catch @ 042069c4
                        */
      if ((uVar4 & 1) == 0) {
        System_Collections_Generic_List_Enumerator_object___Dispose_3ea899c
                  (&uStack_48,*(undefined8 *)puVar1);
                    /* try { // try from 04206a1c to 04306a23 has its CatchHandler @ 04206a38 */
                    /* try { // try from 04206a24 to 04306a2f has its CatchHandler @ 04206868 */
        return;
      }
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 04206934 with catch @ 042069c8
                        */
      if (lStack_38 == 0) break;
      lVar5 = UnityEngine_Component__get_gameObject_408b480(lStack_38,0);
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_012d0ef0();
      }
                    /* try { // try from 042069e0 to 043069e3 has its CatchHandler @ 04206a0c */
                    /* try { // try from 042069e4 to 04306a1b has its CatchHandler @ 04206868 */
      UnityEngine_GameObject__SetActive_408e318(lVar5,0,0);
      *(undefined8 *)(lVar3 + 0x60) = *(undefined8 *)(param_1 + 0x20);
      FUN_012d0d74();
      plVar6 = (long *)(lVar3 + 0x58);
      *plVar6 = param_1;
      FUN_012d0d74(plVar6,param_1);
                    /* catch() { ... } // from try @ 042069e0 with catch @ 04206a0c */
    }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 04206a30 to 04306a37 has its CatchHandler @ 04206a38 */
    FUN_012d0ef0();
  }
                    /* WARNING: Subroutine does not return */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 04206a1c with catch @ 04206a38
                       catch(type#2 @ 00000000) { ... } // from try @ 04206a30 with catch @ 04206a38
                        */
  FUN_012d0ef0();
}

